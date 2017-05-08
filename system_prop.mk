# Bluetooth
PRODUCT_PROPERTY_OVERRIDES += \
    ro.bt.bdaddr_path=/sys/module/htc_bdaddress/parameters/bdaddress

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
    camera2.portability.force_api=1 \
    media.stagefright.legacyencoder=true \
    media.stagefright.less-secure=true \
    camera.disable_treble=true

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    debug.composition.type=dyn \
    debug.egl.hw=1 \
    debug.mdpcomp.logs=0 \
    debug.sf.hw=1 \
    debug.sf.disable_backpressure=1 \
    persist.hwc.mdpcomp.enable=true

# Thermal
PRODUCT_PROPERTY_OVERRIDES += \
    persist.thermal.monitor=true

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    ro.telephony.call_ring.multiple=0

# WiFi
PRODUCT_PROPERTY_OVERRIDES += \
    wifi.interface=wlan0
