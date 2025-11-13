// 函数: _Z14Draw3DQuadFullPK4Vec3PK4Vec2PK11SpriteColorbRS0_S8_P6XAssetSA_SA_PS2_
// 地址: 0xc97034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x24 = arg8
XAsset* x27 = arg7

if (arg7 == 0)
    XAsset* x0_5 = AttribMapGetAssetPtr(*gMaterialAttribTable, MaterialGetAttribMap(arg9), 0x53)
    
    if (x0_5 == 0)
        x27 = data_23e4f78
    else
        x27 = x0_5
    
    if (x24 == 0)
        x24 = AttribMapGetAssetPtr(*gMaterialAttribTable, MaterialGetAttribMap(arg9), 0x54)
else if (x24 == 0)
    x24 = AttribMapGetAssetPtr(*gMaterialAttribTable, MaterialGetAttribMap(arg9), 0x54)

return Draw3DQuadFullComplete(arg1, arg2, arg3, zx.q(arg4.d) & 1, arg5, arg6, x27, x24) __tailcall
