# Nougat 3.18.35 Linux kernel sources for Doogee X5 Max Pro
Reference 3.18.35 source code for Doogee X5MP

>> Project : n370b

>> Kernel version: 3.18.35

>> System: 32bit only

To compile run:
```sh
$ export CROSS_COMPILE="your path"
$ export ARCH=arm 
$ make n370b_defconfig O=out1
$ make -j16 O=out1 | tee build.log
```

Current status is:
- [x] Bootup
- [x] LCM
- [x] Touch 
- [x] Charger
- [x] Sound 
- [x] ALS/PS 
- [?] Camera (Need new libs for Nougat)
- [x] Accelerometr
- [x] Other 
- [x] USB
- [x] Fingerprint



![Image of Yaktocat](http://bestmobiles.in.ua/4439-large_default/smartfon-doogee-x5-max-pro-white.jpg)

| Spec's | - |
| ---------------|:--------------------:|
| CPU: | MT6737 x64 1.3 Ghz |
| GPU: | Mali T-720 |
| RAM: | 2 Gb LPDDR3 |
| ROM: | 16 Gb EMCC |
| Touch: | ft5x0x |
| LCM: | otm1283a_cmi50_tps65132_hd hx8394d_cmi50_blj_hd ili9881c_auo50_xzx_hd nt35521_boe50_xld_hd jd9365_inx50_jmg_hd rm68200_cpt50_blj_hd |
| ALS/PS: | epl259x-new |
| Fingerprint: | madev |
| Camera: | gc5024_mipi_raw gc5005_mipi_raw hi553_mipi_raw hi843b_mipi_raw hi841_mipi_raw mn045_mipi_raw hi544_mipi_raw |
| Accelerometr: | kxtj21009-new |
