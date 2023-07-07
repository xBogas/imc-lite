# MASTERS THESIS - João Bogas

## Generate IMC files

To generate imc files:

```bash
  git clone https://github.com/LSTS/imc.git imc
```

If necessary create new messages in file imc/IMC.xml (This file must be the same that generated DUNE IMC classes)

```bash
  cd imc
  make
  cd ..
  mkdir build IMC
  cmake ..
```
