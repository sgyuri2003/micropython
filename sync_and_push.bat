@echo off
SETLOCAL

REM ----------------------------------------------------------------------
REM CÉL: Végrehajtja a Git ADD, COMMIT, és PUSH parancsokat, ellenőrzéssel.
REM A 'build.yml' fájl átnevezését és módosítását veszi alapul a CI indításhoz.
REM ----------------------------------------------------------------------

SET FILENAME=.github\workflows\build.yml
SET COMMIT_MSG="Enable CI build by renaming workflow file"

REM ----------------------------------------------------------------------
REM 1. LÉPÉS: Változások hozzáadása a Githez (ADD)
REM ----------------------------------------------------------------------
echo.
echo === 1. LÉPÉS: Változások hozzáadása a Githez (git add) ===
git add %FILENAME%
IF %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ HIBA: Nem sikerült a %FILENAME% hozzáadása a Githez.
    echo Kérem, ellenőrizze, hogy a %FILENAME% létezik-e, és megfelelően van-e átnevezve.
    GOTO :END
)

REM ----------------------------------------------------------------------
REM 2. LÉPÉS: Változások elkötelezése (COMMIT)
REM ----------------------------------------------------------------------
echo.
echo === 2. LÉPÉS: Változások elkötelezése (git commit) ===
git commit -m %COMMIT_MSG%
IF %ERRORLEVEL% NEQ 0 (
    REM Megengedett hiba: ha nincs új változás, a commit hibaüzenettel tér vissza.
    REM Itt csak akkor jelezzük a hibát, ha a COMMIT más okból futott hibára.
    
    REM Mivel a Git commit -m parancsa 1-es ERRORLEVEL-t ad vissza, ha nincs
    REM elköteleznivaló, ezért ezt a hibát figyelmen kívül hagyjuk.
    
    REM Ellenőrizhetjük a 'Nothing to commit' üzenetet is, de az ERRORLEVEL (0 vagy 1) a legegyszerűbb.
    
    echo.
    echo ⚠️ FIGYELEM: A commit nem volt sikeres (valószínűleg nincs mit elkötelezni).
    echo Megpróbáljuk a PUSH-t.
)

REM ----------------------------------------------------------------------
REM 3. LÉPÉS: Feltöltés a GitHubra (PUSH)
REM ----------------------------------------------------------------------
echo.
echo === 3. LÉPÉS: Feltöltés a GitHubra (git push) ===
git push
IF %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ HIBA: Nem sikerült a feltöltés a GitHubra (git push).
    echo Kérem, ellenőrizze az internetkapcsolatot és a GitHub hitelesítést.
    GOTO :END
)

REM ----------------------------------------------------------------------
REM SIKER
REM ----------------------------------------------------------------------
echo.
echo.
echo ✅ SIKER: A kód feltöltve a GitHubra. A CI Build most elindul!
echo.

:END
ENDLOCAL
pause