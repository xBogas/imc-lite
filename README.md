# IMC

## Add as PlatformIO library

```ini
lib_deps = 
 https://github.com/xBogas/imc-lite

extra_scripts =
 pre:/$PROJECT_LIBDEPS_DIR/$PIOENV/IMC/pre_build.py
```

To force build of IMC add

```ini
custom_force_imc = True
```
