@echo off
SETLOCAL

REM ----------------------------------------------------------------------
REM CÉL: A módosított MY_H743_BOARD könyvtár feltöltése a GitHubra, ellenőrzéssel.
REM HASZNÁLAT:
REM   Indításkor meg kell adni a commit üzenetet idézőjelek között.
REM   Példa: add_Board.bat "Updated pin definitions in pins.csv"
REM ----------------------------------------------------------------------

SET FILENAME=ports/stm32/boards/MY_H743_BOARD

REM ----------------------------------------------------------------------
REM HASZNÁLAT ÉS ARGUMENTUM ELLENŐRZÉS
REM ----------------------------------------------------------------------
echo.
echo ====================================================================
echo HASZNÁLAT: add_Board.bat "Commit üzenet (pl. a változások leírása)"
echo PÉLDA: add_Board.bat "Updated pins.csv for better ADC resolution"
echo ====================================================================
echo.

IF "%~1"=="" (
    echo ❌ HIBA: Hiányzik a commit üzenet. Kerem adja meg idezojelek kozott.
    GOTO :END
)

SET COMMIT_MSG=%1

REM ----------------------------------------------------------------------
REM 1. LÉPÉS: Változások hozzáadása a Githez (ADD)
REM ----------------------------------------------------------------------
echo.
echo === 1. LÉPÉS: Változások hozzáadása a Githez (git add) ===
git add %FILENAME%
IF %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ HIBA: Nem sikerült a %FILENAME% hozzáadása a Githez.
    GOTO :END
)

REM ----------------------------------------------------------------------
REM 2. LÉPÉS: Változások elkötelezése (COMMIT)
REM ----------------------------------------------------------------------
echo.
echo === 2. LÉPÉS: Változások elkötelezése (git commit) ===
git commit -m %COMMIT_MSG%
IF %ERRORLEVEL% NEQ 0 (
    echo.
    echo ⚠️ FIGYELEM: A commit nem volt sikeres. Lehet, hogy nincs mit elkötelezni.
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
echo ✅ SIKER: A módosított BOARD könyvtár feltöltve a GitHubra.
echo Commit üzenet: %COMMIT_MSG%
echo.

:END
ENDLOCAL
pause