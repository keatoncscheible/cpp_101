@echo off

set build_dir=..\build

if exist %build_dir% (
    echo Cleaning the project...
    rmdir /s /q %build_dir%
    echo Project cleaned successfully.
) else (
    echo Nothing to clean. The build directory does not exist.
)

