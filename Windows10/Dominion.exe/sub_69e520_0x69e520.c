// 函数: sub_69e520
// 地址: 0x69e520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147ac28

if (*(eax + 0x20) == 1)
    float xmm0_2 = data_8c4634 f+ *(eax + 0x24)
    *(eax + 0x24) = xmm0_2
    
    if (not(xmm0_2 < 0.75f))
        *(eax + 0x20) = 0

enum WAIT_EVENT eax_1 = WaitForSingleObject(*(eax + 0xc), 0xffffffff)
int32_t var_24_1
char const* const var_20

if (eax_1 == WAIT_OBJECT_0)
    int32_t* edi_1 = data_147ac28
    int32_t* i = *edi_1
    
    if (i != 0)
        void* eax_2 = edi_1[5]
        
        do
            int32_t* i_1 = i[8]
            int32_t* eax_3 = sub_64bfd0(0x28)
            eax_3[3] += 1
            
            if (*eax_3 == 0)
                sub_64be70(eax_3)
            
            int32_t* esi_1 = *eax_3
            *eax_3 = *esi_1
            __builtin_memset(esi_1, 0, 0x28)
            *esi_1 = *i
            esi_1[1] = i[1]
            esi_1[2] = i[2]
            esi_1[3] = i[3]
            int32_t eax_9 = i[4]
            esi_1[5] = i[5]
            esi_1[4] = eax_9
            char* eax_10 = i[6]
            esi_1[6] = eax_10
            
            if (eax_10 != 0 && *eax_10 != 0)
                eax_10 = sub_63d4e0(&esi_1[6])
                *(eax_10 + 4) += 1
            
            eax_10.b = i[7].b
            esi_1[7].b = eax_10.b
            esi_1[8] = eax_2
            
            if (eax_2 == 0)
                esi_1[9] = edi_1[5]
                void* eax_14 = edi_1[5]
                
                if (eax_14 == 0)
                    edi_1[4] = esi_1
                else
                    *(eax_14 + 0x20) = esi_1
                
                edi_1[5] = esi_1
            else
                esi_1[9] = *(eax_2 + 0x24)
                void* eax_12 = *(eax_2 + 0x24)
                
                if (eax_12 == 0)
                    edi_1[4] = esi_1
                    *(eax_2 + 0x24) = esi_1
                else
                    *(eax_12 + 0x20) = esi_1
                    *(eax_2 + 0x24) = esi_1
            
            edi_1[6] += 1
            i = i_1
        while (i != 0)
        
        edi_1 = data_147ac28
    
    sub_69ea70(edi_1)
    eax_1 = ReleaseSemaphore(*(data_147ac28 + 0xc), 1, nullptr)
    
    if (eax_1 != WAIT_OBJECT_0)
        int32_t* result_1 = nullptr
        int32_t* result
        
        while (true)
            if (result_1 != 0)
                result = result_1[8]
            else
                result = *(data_147ac28 + 0x10)
            
            if (result == 0)
                break
            
            while (true)
                result_1 = result
                result = result[8]
                
                if (result_1[7].b == 0)
                    break
                
                if (result == 0)
                    return result
            
            if (sub_69e1f0(result_1) != 0)
                result_1[7].b = 1
        
        return result
    
    var_20 = "mutex_release"
    var_24_1 = 0x83
else
    var_20 = "mutex_lock"
    var_24_1 = 0x78

sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Engine\Coroutine.cpp", var_24_1, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
