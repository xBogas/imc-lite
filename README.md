# IMC adaptation to microcontrollers

## Generate IMC files

To generate imc files:

```bash
  git clone https://github.com/LSTS/imc.git imc
```

If necessary create new messages in file imc/IMC.xml (This file must be the same that generated DUNE IMC classes)

```bash
  mkdir build
  cd build
  cmake ..
  make imc
```

This will generate IMC header files in include/IMC_GENERATED and
the implementation files in src/IMC_GENERATED
