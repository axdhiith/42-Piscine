#!/bin/bash
git ls-files $(git rev-parse --show-toplevel) -i -o --exclude-standard
