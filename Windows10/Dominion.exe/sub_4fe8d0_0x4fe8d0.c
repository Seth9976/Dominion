// 函数: sub_4fe8d0
// 地址: 0x4fe8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_573400()
void* result_2 = result
void* result_3 = result_2
int32_t edi = *(result_2 + 4)

if (arg1 u> 0x48)
    int32_t var_24
    char* ecx
    
    if (arg1 s>= 0x3e8)
        var_24 = 0x33e
        ecx = "who != PLAYER_NONE"
    else
        var_24 = 0x33d
        ecx = "where >= START_PLAYER_PILES"
    
    sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_24, 
        "GetPileHead")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (arg1 s>= 0x48)
    sub_591930()
    result_2 = result_3

int32_t i = *(edi + arg1 * 0x10 + 0x152c)

if (i != 0)
    int32_t ebx_1 = *(result_2 + 4)
    uint32_t edi_1 = zx.d(i.w)
    
    if (edi_1 u>= 0x320)
        sub_591930()
        result_2 = result_3
    
    result = *(edi_1 * 0x64 + ebx_1 + 0x1a4c)
    void* result_1 = result
    
    do
        int32_t ebx_2 = *(result_2 + 4)
        uint32_t esi_2 = zx.d(i.w)
        
        if (esi_2 u>= 0x320)
            sub_591930()
            result_2 = result_3
            result = result_1
        
        int32_t edi_2 = esi_2 * 0x64
        
        if (*(edi_2 + ebx_2 + 0x1a4c) != result)
            result.b = 1
            return result
        
        int32_t ebx_3 = *(result_2 + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
            result_2 = result_3
            result = result_1
        
        i = *(edi_2 + ebx_3 + 0x1aa4)
    while (i != 0)

result.b = 0
return result
