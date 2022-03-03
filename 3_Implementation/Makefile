#Targetname : Dependencies
#<TAB>commands
PROJ_NAME= calender
#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

Build : Project_main.c calender.c test_calender.c unity.c
	gcc Project_main.c calender.c test_calender.c unity.c -o  $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean :
		 $(RM) $(call FixPath,*.out)