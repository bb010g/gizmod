#!/bin/bash

PACKAGE="gizmod"

if [ "$1" = "" ] ; then
	echo "Specify a Version"
	exit
fi

echo "Copying to ../$PACKAGE-$1"
cp -r . ../$PACKAGE-$1
cd ../$PACKAGE-$1
echo "removing non-dist files"
rm -rf *.kdev* documentation debug optimized valgrind *.tag package.sh
for remove in `find . -name \*\.svn` ; do
	rm -rf $remove
done
for remove in `find . -name \*\.pyc` ; do
	rm -rf $remove
done
echo "Packaging"
cd ..
tar jcfh $PACKAGE-$1.tar.bz2 $PACKAGE-$1/*
tar zcfh $PACKAGE-$1.tar.gz $PACKAGE-$1/*
echo "Done"
