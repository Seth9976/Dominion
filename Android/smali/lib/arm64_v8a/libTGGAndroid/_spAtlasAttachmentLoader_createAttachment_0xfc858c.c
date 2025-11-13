// 函数: _spAtlasAttachmentLoader_createAttachment
// 地址: 0xfc858c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 u> 6)
    _spAttachmentLoader_setUnknownTypeError(arg1, zx.q(arg3))
else
    switch (arg3)
        case 0
            void* x0_6 = spAtlas_findRegion(*(arg1 + 0x18), arg5)
            
            if (x0_6 != 0)
                void* x0_8
                int128_t v0_2
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                x0_8, v0_2, v1_1, v2_1, v3_1 = spRegionAttachment_create(arg4)
                *(x0_8 + 0x60) = x0_6
                v0_2.d = *(x0_6 + 0x18)
                v1_1.d = *(x0_6 + 0x1c)
                v2_1.d = *(x0_6 + 0x20)
                v3_1.d = *(x0_6 + 0x24)
                spRegionAttachment_setUVs(x0_8, zx.q(*(x0_6 + 0x3c)), v0_2, v1_1, v2_1, v3_1)
                *(x0_8 + 0x68) = *(x0_6 + 0x28)
                *(x0_8 + 0x6c) = *(x0_6 + 0x2c)
                *(x0_8 + 0x70) = *(x0_6 + 0x10)
                *(x0_8 + 0x74) = *(x0_6 + 0x14)
                *(x0_8 + 0x78) = *(x0_6 + 0x30)
                *(x0_8 + 0x7c) = *(x0_6 + 0x34)
                return x0_8
            
            _spAttachmentLoader_setError(arg1, "Region not found: ", arg5)
        case 1
            return spBoundingBoxAttachment_create(arg4) __tailcall
        case 2, 3
            void* x0_1 = spAtlas_findRegion(*(arg1 + 0x18), arg5)
            
            if (x0_1 != 0)
                void* x0_3 = spMeshAttachment_create(arg4)
                *(x0_3 + 0x60) = x0_1
                *(x0_3 + 0x80) = *(x0_1 + 0x18)
                *(x0_3 + 0x84) = *(x0_1 + 0x1c)
                *(x0_3 + 0x88) = *(x0_1 + 0x20)
                *(x0_3 + 0x8c) = *(x0_1 + 0x24)
                *(x0_3 + 0x90) = *(x0_1 + 0x3c)
                *(x0_3 + 0x94) = *(x0_1 + 0x40)
                *(x0_3 + 0x68) = *(x0_1 + 0x28)
                *(x0_3 + 0x6c) = *(x0_1 + 0x2c)
                *(x0_3 + 0x70) = *(x0_1 + 0x10)
                *(x0_3 + 0x74) = *(x0_1 + 0x14)
                *(x0_3 + 0x78) = *(x0_1 + 0x30)
                *(x0_3 + 0x7c) = *(x0_1 + 0x34)
                return x0_3
            
            _spAttachmentLoader_setError(arg1, "Region not found: ", arg5)
        case 4
            return spPathAttachment_create(arg4) __tailcall
        case 5
            return spPointAttachment_create(arg4) __tailcall
        case 6
            return spClippingAttachment_create(arg4) __tailcall

return nullptr
