// 函数: _Z14UIStateDestroyj
// 地址: 0x10547f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

UIState* x19_1 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int64_t* x20_1 = *(x19_1 + 8)
void*** x8_2 = *x20_1

if (x8_2 == 0)
    if (x20_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x8_2 = *x20_1

void** x23_1 = *x8_2

if (x23_1[1].d s>= 1)
    int64_t x24_1 = 0
    int64_t i = 0
    
    do
        void* x21_1 = *x23_1 + x24_1
        void* x0_6 = UIStateElementGet(x19_1, i.d, *(x21_1 + 8))
        int32_t x8_9 = *(x21_1 + 4)
        
        if (x8_9 == 9)
            ParticleSystem* x0_38 = ParticleTryToGet(zx.q(*(x0_6 + 0xc4)))
            
            if (x0_38 != 0)
                ParticleDestroy(x0_38)
        else if (x8_9 == 8)
            Flanim* x0_40 = FlanimTryToGet(zx.q(*(x0_6 + 0xc0)))
            
            if (x0_40 != 0)
                FlanimDestroy(x0_40)
        else if (x8_9 == 2)
            UIStateDestroy(*(x0_6 + 0xc8))
            UIStateDestroy(*(x0_6 + 0xcc))
            UIStateDestroy(*(x0_6 + 0xd0))
            UIStateDestroy(*(x0_6 + 0xd4))
            UIStateDestroy(*(x0_6 + 0xd8))
            UIStateDestroy(*(x0_6 + 0xdc))
            UIStateDestroy(*(x0_6 + 0xe0))
            UIStateDestroy(*(x0_6 + 0xe4))
            UIStateDestroy(*(x0_6 + 0xe8))
            UIStateDestroy(*(x0_6 + 0xec))
            UIStateDestroy(*(x0_6 + 0xf0))
            UIStateDestroy(*(x0_6 + 0xf4))
            UIStateDestroy(*(x0_6 + 0xf8))
            UIStateDestroy(*(x0_6 + 0xfc))
            UIStateDestroy(*(x0_6 + 0x100))
            UIStateDestroy(*(x0_6 + 0x104))
            UIStateDestroy(*(x0_6 + 0x108))
            UIStateDestroy(*(x0_6 + 0x10c))
            UIStateDestroy(*(x0_6 + 0x110))
            UIStateDestroy(*(x0_6 + 0x114))
            UIStateDestroy(*(x0_6 + 0x118))
            UIStateDestroy(*(x0_6 + 0x11c))
            UIStateDestroy(*(x0_6 + 0x120))
            UIStateDestroy(*(x0_6 + 0x124))
            UIStateDestroy(*(x0_6 + 0x128))
            UIStateDestroy(*(x0_6 + 0x12c))
            UIStateDestroy(*(x0_6 + 0x130))
            UIStateDestroy(*(x0_6 + 0x134))
            UIStateDestroy(*(x0_6 + 0x138))
            UIStateDestroy(*(x0_6 + 0x13c))
        
        UITextBox::~UITextBox()
        XString::~XString()
        int32_t x8_5 = *(gUISystem + 0x14)
        uint32_t x10_1 = zx.d(*(x0_6 + 0x218))
        i += 1
        x24_1 += 0x178
        *(x0_6 + 0x218) = *(gUISystem + 0x10)
        *(gUISystem + 0x10) = x10_1
        *(gUISystem + 0x14) = x8_5 - 1
    while (i s< sx.q(x23_1[1].d))

int32_t x9_3 = *(gUISystem + 0x38)
*(gUISystem + 0x38) = zx.d(*(x19_1 + 0x450))
*(x19_1 + 0x450) = x9_3
*(gUISystem + 0x3c) -= 1
