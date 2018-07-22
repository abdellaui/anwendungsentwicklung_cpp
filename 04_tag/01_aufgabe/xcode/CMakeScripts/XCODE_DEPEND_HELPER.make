# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.01_aufgabe.Debug:
/Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/Debug/01_aufgabe:\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtSql.framework/QtSql\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/Debug/01_aufgabe


PostBuild.01_aufgabe.Release:
/Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/Release/01_aufgabe:\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtSql.framework/QtSql\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/Release/01_aufgabe


PostBuild.01_aufgabe.MinSizeRel:
/Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/MinSizeRel/01_aufgabe:\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtSql.framework/QtSql\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/MinSizeRel/01_aufgabe


PostBuild.01_aufgabe.RelWithDebInfo:
/Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/RelWithDebInfo/01_aufgabe:\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtSql.framework/QtSql\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-MOODLE/semester_3/anwendungsentwicklung/cpp/04_tag/01_aufgabe/xcode/RelWithDebInfo/01_aufgabe




# For each target create a dummy ruleso the target does not have to exist
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore:
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui:
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtSql.framework/QtSql:
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets:
