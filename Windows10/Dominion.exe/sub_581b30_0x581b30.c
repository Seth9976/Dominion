// 函数: sub_581b30
// 地址: 0x581b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
void* i_1 = *sub_5722c0(eax, 0x3ea, arg1, arg2)
void* i_2 = i_1
void* result
uint32_t esi_1

if (i_1 == 0)
    void* i
    
    do
        result = nullptr
    label_581b75:
        i = result
        
        if (i_1 == 0)
            return result
        
        uint32_t esi_2 = 0
        
        if (*(arg1 + 0xd38) s> 0)
        label_581b86:
            
            if (arg2 != esi_2 && (arg2 != *(arg1 + 0x19cc) || esi_2 != *(arg1 + 0x19d0)))
                sub_581a00(result, i_1, arg1, esi_2, nullptr)
                i_1 = i_2
            
            if (esi_2 + 1 s< *(arg1 + 0xd38))
                break
        
        i_1 = i
        i_2 = i_1
    while (i == 0)
    
    esi_1 = zx.d(i.w)
else
    esi_1 = zx.d(i_1.w)

if (esi_1 u>= 0x320)
    sub_591930()
    i_1 = i_2

result = *(esi_1 * 0x64 + arg1 + 0x1aa4)
goto label_581b75
