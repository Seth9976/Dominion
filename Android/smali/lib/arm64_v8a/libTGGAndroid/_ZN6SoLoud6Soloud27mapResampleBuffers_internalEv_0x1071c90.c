// 函数: _ZN6SoLoud6Soloud27mapResampleBuffers_internalEv
// 地址: 0x1071c90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void* entry_x0
uint64_t i_4 = zx.q(*(entry_x0 + 0x30))

if (i_4.d u>= 0x100)
label_1071f48:
    __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x77c, 
        "void SoLoud::Soloud::mapResampleBuffers_internal()", "mMaxActiveVoices < 256")
else
    char var_168[0x100]
    int64_t result = memset(&var_168, 0, i_4)
    
    if (i_4.d != 0)
        int64_t x9_1 = *(entry_x0 + 0x90)
        int64_t x8_1 = 0
        
        do
            int64_t x11_1 = *(x9_1 + (x8_1 << 3))
            
            if (x11_1 != 0)
                char (* x12_1)[0x100] = &var_168
                uint64_t i_3 = i_4
                void* x14_1 = entry_x0 + 0x20e4c
                uint64_t i
                
                do
                    if (x11_1 == *(entry_x0 + (zx.q(*x14_1) << 3) + 0x98))
                        var_168[x8_1] |= 1
                        *x12_1 |= 2
                    
                    x14_1 += 4
                    i = i_3
                    i_3 -= 1
                    x12_1 = &(*x12_1)[1]
                while (i != 1)
            
            x8_1 += 1
        while (x8_1 != i_4)
        
        if (i_4.d != 0)
            int64_t i_1 = 0
            
            do
                if ((zx.d(var_168[i_1]) & 1) == 0)
                    void* x10_4 = *(*(entry_x0 + 0x90) + (i_1 << 3))
                    
                    if (x10_4 != 0)
                        *(x10_4 + 0x1c8) = 0
                        *((*(entry_x0 + 0x90))[i_1] + 0x1d0) = 0
                        (*(entry_x0 + 0x90))[i_1] = 0
                        i_4 = zx.q(*(entry_x0 + 0x30))
                
                i_1 += 1
            while (i_1 u< zx.q(i_4.d))
    
    int32_t x10_8 = *(entry_x0 + 0x21e4c)
    
    if (x10_8 != 0)
        int64_t i_2 = 0
        int32_t x8_2 = 0
        
        do
            if ((zx.d(var_168[i_2]) & 2) == 0)
                int64_t x9_10 = *(entry_x0 + (zx.q(*(entry_x0 + (i_2 << 2) + 0x20e4c)) << 3) + 0x98)
                
                if (x9_10 != 0)
                    uint64_t x12_2 = zx.q(*(entry_x0 + 0x30))
                    uint64_t x26_1 = zx.q(x8_2)
                    int64_t x27_1 = 0
                    uint64_t x12_3
                    
                    x12_3 = x26_1 u> x12_2 ? x26_1 : x12_2
                    
                    int64_t x10_13 = neg.q(x26_1 << 0x20)
                    int32_t x8_9 = (x8_2 << 1) - 1
                    
                    while (true)
                        if (x26_1 - x12_3 == neg.q(x27_1))
                            __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x7a3, 
                                "void SoLoud::Soloud::mapResampleBuffers_internal()", "found != -1")
                            goto label_1071f48
                        
                        int64_t* x14_2 = *(entry_x0 + 0x90)
                        int64_t x15_8 = x27_1
                        x10_13 += -0x100000000
                        x8_9 += 2
                        int64_t x16_2 = x14_2[x26_1 + x27_1]
                        x27_1 += 1
                        
                        if (x16_2 == 0)
                            if ((x26_1 | 0xffffffff00000000) + x15_8 != -1)
                                int64_t x28_1 = (-0x100000000 - x10_13) s>> 0x1d
                                *(x14_2 + x28_1) = x9_10
                                *(*(*(entry_x0 + 0x90) + x28_1) + 0x1c8) =
                                    *(*(entry_x0 + 0x70) + (sx.q(x8_9 - 1) << 3))
                                *(*(*(entry_x0 + 0x90) + x28_1) + 0x1d0) =
                                    *(*(entry_x0 + 0x70) + (sx.q(x8_9) << 3))
                                memset(*(*(*(entry_x0 + 0x90) + x28_1) + 0x1c8), 0, 0x4000)
                                result = memset(*(*(*(entry_x0 + 0x90) + x28_1) + 0x1d0), 0, 0x4000)
                                x10_8 = *(entry_x0 + 0x21e4c)
                                x8_2 = x26_1.d + x27_1.d
                                break
            
            i_2 += 1
        while (i_2 u< zx.q(x10_8))
    
    if (*(x21 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
