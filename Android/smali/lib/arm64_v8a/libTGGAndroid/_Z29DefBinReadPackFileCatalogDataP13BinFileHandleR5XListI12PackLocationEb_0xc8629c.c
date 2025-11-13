// 函数: _Z29DefBinReadPackFileCatalogDataP13BinFileHandleR5XListI12PackLocationEb
// 地址: 0xc8629c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = HalGetFileSize(arg1)
int32_t x20_1
int32_t var_60
int32_t var_5c

if (x0 u< 0xc)
    x20_1 = 0
else if ((HalRead(arg1, 0xc, &var_60) & 1) == 0 || var_60 != 0x5850434b || var_5c != 7)
    x20_1 = 0
else
    int32_t var_58
    int32_t x23_1 = var_58 * 0xa8
    
    if (x0 s< x23_1)
        x20_1 = 0
    else if (var_58 == 0)
        x20_1 = 1
    else
        void* x0_4 = XMalloc(x23_1)
        
        if ((HalRead(arg1, x23_1, x0_4) & 1) == 0)
            XFree(x0_4)
            x20_1 = 0
        else
            if (var_58 == 0)
            label_c86458:
                x20_1 = 1
            else
                void var_90
                
                if ((arg3.d & 1) == 0)
                    int64_t i = 0
                    void* x21_2 = x0_4 + 0x28
                    
                    do
                        void* x0_16 = AssetTypeGetInfo(zx.q(*(x21_2 - 0x28)))
                        void* x27_1 = *(x0_16 + 0x30)
                        AssetPathFromName(x21_2, zx.q(*(x21_2 - 0x28)))
                        
                        if (*(x21_2 - 0x24) != *(x27_1 + 0x28))
                            XString::operator char const*()
                            XTrace("Can't load pack asset because version doesn't match '%s'")
                        else if ((zx.d(*(x0_16 + 0x2c)) & 1) != 0
                                || *(x21_2 - 0x20) == *(x0_16 + 0x28))
                            XString::XString()
                            XString::operator=(&var_90)
                            int32_t x8_24 = *(x21_2 - 0x28)
                            int64_t x8_25 = *(x21_2 - 0x10)
                            int64_t var_70_2 = *(x21_2 - 8)
                            int32_t var_84_2 = *(x21_2 - 0x1c)
                            int32_t var_80_2 = *(x21_2 - 0x18)
                            int32_t var_7c_2 = *(x21_2 - 0x14)
                            XString* x0_19 = XPooledCalloc(0x38)
                            int128_t v0_2
                            int128_t v1_2
                            v0_2, v1_2 = XString::XString(x0_19)
                            *(x0_19 + 0x28) = 0
                            *(x0_19 + 0x18) = x8_25.o
                            *(x0_19 + 8) = x8_24.o
                            *(x0_19 + 0x30) = *(arg2 + 8)
                            void* x8_31 = *(arg2 + 8)
                            XList<PackLocation>& x8_32
                            
                            if (x8_31 == 0)
                                x8_32 = arg2
                            else
                                x8_32 = x8_31 + 0x28
                            
                            *x8_32 = x0_19
                            int32_t x8_33 = *(arg2 + 0x10)
                            *(arg2 + 8) = x0_19
                            *(arg2 + 0x10) = x8_33 + 1
                            XString::~XString()
                        else
                            XString::operator char const*()
                            XTrace("Can't load pack asset because hash doesn't match '%s'")
                        
                        XString::~XString()
                        i += 1
                        x21_2 += 0xa8
                    while (i u< zx.q(var_58))
                    
                label_c86458_1:
                    x20_1 = 1
                else
                    int64_t x23_2 = 0
                    void* x21_1 = x0_4 + 0x28
                    
                    while (true)
                        void* x0_8 = AssetTypeGetInfo(zx.q(*(x21_1 - 0x28)))
                        void* x24_1 = *(x0_8 + 0x30)
                        AssetPathFromName(x21_1, zx.q(*(x21_1 - 0x28)))
                        
                        if (*(x21_1 - 0x24) != *(x24_1 + 0x28))
                            XString::operator char const*()
                            XTrace("Can't load pack asset because version doesn't match '%s'")
                        else if ((zx.d(*(x0_8 + 0x2c)) & 1) != 0
                                || *(x21_1 - 0x20) == *(x0_8 + 0x28))
                            XString::XString()
                            XString::operator=(&var_90)
                            int32_t x8_8 = *(x21_1 - 0x28)
                            int64_t x8_9 = *(x21_1 - 0x10)
                            int64_t var_70_1 = *(x21_1 - 8)
                            int32_t var_84_1 = *(x21_1 - 0x1c)
                            int32_t var_80_1 = *(x21_1 - 0x18)
                            int32_t var_7c_1 = *(x21_1 - 0x14)
                            XString* x0_11 = XPooledCalloc(0x38)
                            int128_t v0_1
                            int128_t v1_1
                            v0_1, v1_1 = XString::XString(x0_11)
                            *(x0_11 + 0x28) = 0
                            *(x0_11 + 0x18) = x8_9.o
                            *(x0_11 + 8) = x8_8.o
                            *(x0_11 + 0x30) = *(arg2 + 8)
                            void* x8_15 = *(arg2 + 8)
                            XString** x8_16
                            
                            if (x8_15 == 0)
                                x8_16 = arg2
                            else
                                x8_16 = x8_15 + 0x28
                            
                            *x8_16 = x0_11
                            int32_t x8_17 = *(arg2 + 0x10)
                            *(arg2 + 8) = x0_11
                            *(arg2 + 0x10) = x8_17 + 1
                            XString::~XString()
                            XString::~XString()
                            x23_2 += 1
                            x21_1 += 0xa8
                            
                            if (x23_2 u>= zx.q(var_58))
                                goto label_c86458_1
                            
                            continue
                        else
                            XString::operator char const*()
                            XTrace("Can't load pack asset because hash doesn't match '%s'")
                        
                        XString::~XString()
                        x20_1 = 0
                        break
            
            XFree(x0_4)
return zx.q(x20_1)
