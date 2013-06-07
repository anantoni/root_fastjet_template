#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT([root_fastjet_template],[1.0],[anastasios.antoniadis@cern.ch])
AM_PROG_LIBTOOL
AC_ENABLE_SHARED
AC_ENABLE_STATIC
AM_INIT_AUTOMAKE([foreign -Wall])
AC_CONFIG_MACRO_DIR([m4])
#LT_INIT

AC_C_CONST
AC_PROG_CC
AC_PROG_CXX

ROOT_PATH(, , AC_MSG_ERROR(ROOT not found on your system or ROOTSYS not set))
ROOT_PATH(, AC_DEFUN([HAVE_ROOT]))
ACX_CHECK_FASTJET(, AC_MSG_ERROR(Fastjet not found on your system))


AC_CONFIG_SRCDIR([src/main.cc])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile
		src/Makefile
		lib/Makefile])

AC_CHECK_FUNCS([gettimeofday])
AC_CHECK_HEADERS([sys/time.h])
AC_HEADER_TIME

# Checks for programs.
AC_LANG([C++])
AC_PROG_INSTALL

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT
