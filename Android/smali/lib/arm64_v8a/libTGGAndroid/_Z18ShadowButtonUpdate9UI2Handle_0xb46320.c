// 函数: _Z18ShadowButtonUpdate9UI2Handle
// 地址: 0xb46320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x38) == 0xffffffff)
    return 

int32_t x19_1 = arg1.d
int32_t var_2c
int32_t var_28
bool var_24
arg1 = CalcDeckShadows(&var_2c, &var_28, &var_24, nullptr)

if (arg1.d == 0)
    return 

int32_t x8_1 = *(gDomClient + 0x38)
uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
int32_t x8_2

x8_2 = x8_1 == 0xffffffff ? 0 : x8_1

if (x10_1.d != 0)
    void* x9_2 = *(gDomClient + 0x205e0)
    int64_t x11_1 = x9_2 + x10_1 * 0x21d8
    void* x10_2 = x9_2
    
    do
        if (zx.d(*(x10_2 + 0x21d2)) != 0)
            if (x10_2 != 0xffffffff)
                while (true)
                    if (*(x10_2 + 0x2c) == 3 && *(x10_2 + 0x58) == x8_2 && *(x10_2 + 0x5c) == 0x3eb
                            && *(x10_2 + 0x60) == 0)
                        if (x10_2 == 0)
                            break
                        
                        if (*(x10_2 + 0x21d0) != *(gDomClient + 0x1f8e4))
                            break
                        
                        return 
                    
                    if (x10_2 == 0)
                        x10_2 = x9_2
                    else
                        x10_2 += 0x21d8
                    
                    if (x10_2 u>= x11_1)
                        goto label_b46438
                    
                    while (zx.d(*(x10_2 + 0x21d2)) == 0)
                        x10_2 += 0x21d8
                        
                        if (x10_2 u>= x11_1)
                            goto label_b46438
                    
                    if (x10_2 == 0xffffffff)
                        goto label_b46438
            
            break
        
        x10_2 += 0x21d8
    while (x10_2 u< x11_1)

label_b46438:
UI2SetState(zx.q(x19_1), &data_1831db8, 0xffffffff, 0)
int64_t* x1_2
int32_t x20_3

if (arg1.d != 2)
    void* x0_3 = DomDefGet(zx.q(var_2c), 0x18)
    
    if ((zx.d(*(x0_3 + 0xcd)) & 0x10) != 0)
        x1_2 = x0_3 + 0x90
        goto label_b464bc
    
    UI2SetState(zx.q(x19_1), &data_1831e30, 0xffffffff, 0)
    UI2SetImage(zx.q(x19_1), &data_1831e48, **(x0_3 + 0x68), 0xffffffff)
    x20_3 = var_28
    
    if (x20_3 s>= 2)
    label_b464e4:
        UI2SetState(zx.q(x19_1), &data_1831e00, 0xffffffff, 0)
        XStringFromInt(x20_3)
        void var_38
        UI2SetText(zx.q(x19_1), &data_1831e18, &var_38, 0xffffffff)
        XString::~XString()
else
    x1_2 = &data_1831dd0
label_b464bc:
    UI2SetState(zx.q(x19_1), x1_2, 0xffffffff, 0)
    x20_3 = var_28
    
    if (x20_3 s>= 2)
        goto label_b464e4

if (zx.d(var_24) != 0)
    UI2SetState(zx.q(x19_1), &data_1831de8, 0xffffffff, 0)
