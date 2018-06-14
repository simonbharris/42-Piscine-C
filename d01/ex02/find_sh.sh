find . -iname "*.sh" | rev | cut -d / -f1 | rev | cut -d . -f1
