#!/bin/bash
gcc $CFILE > $(echo &CFILE|put -d"." -fl).0
