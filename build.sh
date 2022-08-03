case $1 in
    -core)
        cd core
        sh build.sh
        ;;
    -editor)
        cd editor
        sh build.sh         #editor has its own build.sh
        ;;
    -rendering)
        cd rendering
        sh build.sh
        ;;
    *)
        echo "Not valid program name"
        ;;
esac
#clear
