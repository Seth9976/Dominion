// 函数: sub_7613a0
// 地址: 0x7613a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* esi = operator new(0x6c)

if (esi == 0)
    esi = nullptr
else
    Stack<unsigned long,64>::Stack<unsigned long,64>(esi)
    sub_75a8b0(esi)
    void* eax_3 = &esi[5]
    int32_t i_1 = 2
    void* ecx_3 = &esi[3]
    int32_t i
    
    do
        *ecx_3 = 0
        ecx_3 += 4
        eax_3 += 0x20
        __builtin_memset(eax_3 - 0x20, 0, 0x20)
        i = i_1
        i_1 -= 1
    while (i != 1)
    esi[0x15] = i_1
    esi[0x16] = i_1
    esi[0x17] = i_1
    esi[0x1a] = i_1

*arg1 = esi
arg1[3] = sub_761240
esi[0x19] = arg4
esi[0x18] = arg1
HANDLE eax_5 = CreateEventA(nullptr, 0, 0, nullptr)
esi[0x16] = eax_5

if (eax_5 != 0)
    HANDLE eax_6 = CreateEventA(nullptr, 0, 0, nullptr)
    esi[0x17] = eax_6
    
    if (eax_6 != 0)
        int16_t eax_7 = arg5.w
        WAVEFORMATEX pwfx
        pwfx.nChannels = eax_7
        int16_t eax_9 = eax_7 * 2
        pwfx.nBlockAlign = eax_9
        pwfx.nSamplesPerSec = arg3
        pwfx.wBitsPerSample = 0x10
        pwfx.cbSize = 0
        pwfx.nAvgBytesPerSec = zx.d(eax_9) * arg3
        pwfx.wFormatTag = 1
        
        if (waveOutOpen(&esi[0x15], 0xffffffff, &pwfx, esi[0x16], 0, CALLBACK_EVENT) == 0)
            sub_75ac90(esi, zx.d(pwfx.nChannels) * esi[0x19])
            int32_t ebx_1 = 0
            void* pwh = &esi[5]
            void* var_20_1 = &esi[3]
            int32_t edx_1 = 2
            
            while (true)
                int32_t eax_18 = zx.d(pwfx.nChannels) * esi[0x19]
                int32_t ecx_6
                ecx_6.b = mulu.dp.d(eax_18, edx_1) u>> 0x20 != 0
                int32_t var_34_2 = neg.d(ecx_6) | (eax_18 * edx_1)
                *var_20_1 = sub_7597a2()
                __builtin_memset(pwh, 0, 0x20)
                *(pwh + 4) = zx.d(pwfx.nChannels) * esi[0x19] * 2
                *pwh = *var_20_1
                uint32_t eax_25 = waveOutPrepareHeader(esi[0x15], pwh, 0x20)
                
                if (eax_25 != 0)
                    break
                
                var_20_1 += 4
                edx_1 = eax_25 + 2
                ebx_1 += 1
                pwh += 0x20
                
                if (ebx_1 s>= 2)
                    sub_75e950(arg1, arg3, zx.d(pwfx.nChannels) * esi[0x19], arg2, arg5)
                    void** eax_28 = sub_761d00(sub_761310, esi)
                    esi[0x1a] = eax_28
                    
                    if (eax_28 == 0)
                        break
                    
                    arg1[0x418] = "WinMM"
                    CookieCheckFunction(0)
                    return 0

sub_761240(arg1)
CookieCheckFunction(7)
return 7
