
mkdir output

@REM xc8 binaries need to be in a environment variable otherwise you have to provide the xc8.exe full path
xc8 --chip=%1 --outdir=".\output" ".\src\LedBlink.c"