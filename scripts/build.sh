export BASEPATH=..
export BUILDPATH=$BASEPATH/build
mkdir $BUILDPATH
(cd $BUILDPATH && cmake $BASEPATH)
(cd $BUILDPATH && make all)

