git status --ignored --short | grep "^\!" | cut -d' ' -f2 | rev | cut -d'/' -f 1 | rev
