// 函数: sub_589340
// 地址: 0x589340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg4
int32_t* esi = arg3
void* eax_1 = esi[ebx * 0x19 + 0x692]

if (*(eax_1 + 0xa0) == 0)
    sub_591930()
    ebx = arg4

int32_t eax_2 = esi[0x541]

if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6)
    arg3.b = eax_2 == 2
    sub_61b1b0(eax_2, 0x16, arg3.b, 0xffffffff, ebx, 2, 1, nullptr, nullptr, 0, 0, 0, 0, 0)
    ebx = arg4

uint32_t eax_3 = zx.d(ebx.w)

if (eax_3 u>= 0x320)
    sub_591930()

void* var_14 = ebx
int32_t var_10 = esi[eax_3 * 0x19 + 0x695]
sub_573050(&var_14, arg2, esi, &var_14)
void* eax_7 = arg5
void* ebx_1 = nullptr
void* var_20_1 = nullptr
TEB* fsbase

if (eax_7 s> 0)
    do
        var_14 = ebx_1
        
        if (eax_7 s> 1)
            void* eax_8 = arg4
            uint32_t ebx_2 = zx.d(eax_8.w)
            
            if (ebx_2 u>= 0x320)
                sub_591930()
            
            int32_t eax_10 = esi[ebx_2 * 0x19 + 0x695]
            void* ebx_4 = *fsbase->ThreadLocalStoragePointer + 0x10
            
            if (*(ebx_4 + 0xf000) s<= 0)
                sub_591930()
            
            int32_t ecx_3 = *(ebx_4 + 0xf000) * 0xf
            *(ebx_4 + (ecx_3 << 3) - 0x5c) = eax_8
            *(ebx_4 + (ecx_3 << 3) - 0x58) = eax_10
            ebx_1 = var_20_1
        
        void* eax_15 = ebx_1 + 1
        ebx_1 = eax_15
        var_20_1 = ebx_1
        sub_578d00(eax_15, arg2, esi, arg4, nullptr, eax_15, arg5)
        int32_t eax_16 = esi[0x541]
        
        if (var_14 == 0)
            int32_t ecx_5 = eax_16
            
            if (eax_16 != 3 && eax_16 != 5 && eax_16 != 4 && eax_16 != 6 && esi[0x540].b == 0)
                int32_t eax_17 = arg2
                
                if (arg2 == esi[0x673])
                    eax_17 = esi[0x674]
                
                eax_16 = sub_59f9b0(eax_17, arg2, esi, eax_17, 0x18, 0, &arg4, 1, 0, 0, 0, 0)
                ecx_5 = esi[0x541]
            
            if (arg2 == esi[0x673] && ecx_5 != 3 && ecx_5 != 5 && ecx_5 != 4 && ecx_5 != 6)
                ecx_5.b = ecx_5 == 2
                sub_61b1b0(eax_16, 0xb, ecx_5.b, arg2, arg4, nullptr, nullptr, nullptr, nullptr, 0, 
                    0, 0, 0, 0)
        else if (eax_16 != 3 && eax_16 != 5 && eax_16 != 4 && eax_16 != 6 && esi[0x540].b == 0)
            int32_t eax_18 = arg2
            
            if (arg2 == esi[0x673])
                eax_18 = esi[0x674]
            
            sub_59f9b0(eax_18, arg2, esi, eax_18, 0x19, 0, &arg4, 1, 0, 0, 0, 0)
        
        int32_t eax_19 = esi[0x541]
        
        if (eax_19 != 3 && eax_19 != 5 && eax_19 != 4 && eax_19 != 6 && esi[0x540].b == 0)
            int32_t eax_20 = arg2
            
            if (arg2 == esi[0x673])
                eax_20 = esi[0x674]
            
            sub_59f9b0(eax_20, arg2, esi, eax_20, 0x1f, 0, nullptr, 0, 0, 0, 0, 0)
        
        (*(eax_1 + 0xa0))()
        int32_t eax_23 = esi[0x541]
        
        if (eax_23 != 3 && eax_23 != 5 && eax_23 != 4 && eax_23 != 6 && esi[0x540].b == 0)
            int32_t eax_24 = arg2
            
            if (arg2 == esi[0x673])
                eax_24 = esi[0x674]
            
            sub_59f9b0(eax_24, arg2, esi, eax_24, 0x20, 0, nullptr, 0, 0, 0, 0, 0)
        
        sub_5ee870()
        eax_7 = arg5
    while (ebx_1 s< eax_7)

sub_578d00(eax_7, arg2, esi, arg4, nullptr, nullptr, nullptr)
void* ecx_11 = *fsbase->ThreadLocalStoragePointer
int32_t eax_26 = *(ecx_11 + 0xf010)

if (eax_26 s<= 0)
    sub_63b870(eax_26, &data_801800, "cs.numContexts > 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(ecx_11 + 0xf010) = eax_26 - 1
void* result = esi[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

ecx_11.b = result == 2
return sub_61b1b0(result, 0x16, ecx_11.b, 0xffffffff, arg4, 2, nullptr, nullptr, nullptr, 0, 0, 0, 
    0, 0)
