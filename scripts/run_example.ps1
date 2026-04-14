param([string]$project = "01_calculator")
mingw32-make -C "projects/$project"
./"projects/$project"/main.exe
