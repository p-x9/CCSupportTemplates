if [ ! -d "$THEOS/templates/ios/opa334" ]; then
  mkdir -p "$THEOS/templates/ios/opa334"
fi

if [ -f "$THEOS/templates/ios/opa334/control_center_module.nic.tar" ]; then
    echo "Removing legacy template..."
    rm $THEOS/templates/ios/opa334/control_center_module.nic.tar
fi

$THEOS/bin/nicify.pl ccsupport_module_provider-11up
$THEOS/bin/nicify.pl control_center_module-11up
$THEOS/bin/nicify.pl control_center_module-swift

cp ./iphone_control_center_module-11up.nic.tar $THEOS/templates/ios/opa334
cp ./iphone_ccsupport_module_provider-11up.nic.tar $THEOS/templates/ios/opa334
cp ./iphone_control_center_module_swift.nic.tar $THEOS/templates/ios/opa334

cp -r ./Headers/ControlCenterUI $THEOS/include
cp -r ./Headers/ControlCenterUIKit $THEOS/include
cp -r ./Headers/ControlCenterServices $THEOS/include
