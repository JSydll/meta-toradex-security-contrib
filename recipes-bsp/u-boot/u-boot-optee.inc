FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

IMX8MP_TEE_CONFIG = "file://0001-imx8mp-binman-add-tee-node.patch"
IMX8MP_TEE_CONFIG:use-mainline-bsp = "file://imx8mp-u-boot-tee.cfg"

SRC_URI:append:verdin-imx8mp = "\
    ${IMX8MP_TEE_CONFIG} \
    file://dram-banks.cfg \
"

SRC_URI:append:toradex-smarc-imx8mp = "\
    ${IMX8MP_TEE_CONFIG} \
    file://dram-banks.cfg \
"

IMX8MM_TEE_CONFIG = "file://0001-imx8mm-binman-add-tee-node.patch"
IMX8MM_TEE_CONFIG:use-mainline-bsp = "file://imx8mm-u-boot-tee.cfg"

SRC_URI:append:verdin-imx8mm = "\
    ${IMX8MM_TEE_CONFIG} \
"

SRC_URI:append:mx7-generic-bsp = "\
    file://enable-sec-mode.cfg \
"

IMX_BOOT_CONTAINER_FIRMWARE:append = "tee.bin"
