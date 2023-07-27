@echo off

set build_dir=..\build

if not exist %build_dir% mkdir %build_dir%
cd %build_dir%

cmake ..
cmake --build . --config Release

echo Project built successfully.
