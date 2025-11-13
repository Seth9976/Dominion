// 函数: sub_590990
// 地址: 0x590990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg4
int32_t eax = arg2
int32_t var_c = eax
void* esi = arg3
void* var_8 = esi
int32_t var_24
char const* const var_20
char* ecx

if (ebx != 0x474)
    if (ebx != 0x451)
        goto label_5909b6
    
    var_20 = "CardsWhere"
    var_24 = 0x4b03
    ecx = "where != CW_PLAYER_DURATION"
else
    sub_591930()
    eax = var_c
label_5909b6:
    int32_t result
    
    if (ebx u> 0x48)
        result = 0
        
        if (ebx s>= 0x3e8)
            goto label_5909fd
        
        var_20 = "GetPileHead"
        var_24 = 0x34b
        ecx = "where >= START_PLAYER_PILES"
    else
        if (ebx s>= 0x48)
            sub_591930()
        
        int32_t* esi_2 = esi + 0x152c + (ebx << 4)
        result = 0
        
        while (true)
            void* esi_6
            
            for (int32_t i = *esi_2; i != 0; i = *(esi_6 + 0x1aa4))
                if (result s>= 0x320)
                    sub_591930()
                
                *(arg5 + (result << 2)) = i
                result += 1
                uint32_t esi_4 = zx.d(i.w)
                
                if (esi_4 u>= 0x320)
                    sub_591930()
                
                esi_6 = esi_4 * 0x64 + var_8
                
                if (*(esi_6 + 0x1a50) != ebx)
                    sub_591930()
            
            if (ebx != 0x3e9)
                return result
            
            esi = var_8
            ebx = 0x451
            eax = var_c
        label_5909fd:
            
            if (eax == 0xffffffff)
                break
            
            esi_2 = esi + ((eax * 0x168c + ebx) << 2) + 0x16328
        
        var_20 = "GetPileHead"
        var_24 = 0x34c
        ecx = "who != PLAYER_NONE"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
