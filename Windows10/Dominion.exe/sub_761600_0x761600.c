// 函数: sub_761600
// 地址: 0x761600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg2
void* const edx = &data_77eb30
int32_t* esi = ecx
int32_t i_1 = 0xc
int32_t i

do
    if (*edx != *esi)
        void* const edx_1 = &data_77ea90
        int32_t j_1 = 0xc
        int32_t j
        
        do
            if (*edx_1 != *ecx)
                *arg3 = nullptr
                return 0x80004002
            
            edx_1 += 4
            ecx = &ecx[1]
            j = j_1
            j_1 -= 4
        while (j u>= 4)
        break
    
    edx += 4
    esi = &esi[1]
    i = i_1
    i_1 -= 4
while (i u>= 4)
(*(*arg1 + 4))(arg1)
*arg3 = arg1
return 0
