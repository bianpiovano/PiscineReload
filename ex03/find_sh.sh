find . -type f -name '*.sh' -exec basename {} .sh \; | sed 's/$/$/'
