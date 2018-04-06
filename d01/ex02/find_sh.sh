find . -regex ".*sh" -exec basename {} \; | sed 's/\.sh//'
