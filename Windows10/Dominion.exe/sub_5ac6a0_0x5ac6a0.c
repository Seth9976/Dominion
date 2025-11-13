// 函数: sub_5ac6a0
// 地址: 0x5ac6a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

EnterCriticalSection(&data_b4a600)
EnterCriticalSection(&data_b4a5e8)
int32_t edi = data_b4a5c4
void* i_3 = data_b4a5c0
void* i = i_3

for (void* eax_1 = edi * 0x510c + i; i u< eax_1; i += 0x510c)
    if ((*(i + 0x5108) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            int32_t* ecx_1 = *(i + 0x507c)
            
            if (ecx_1 != 0)
                sub_69ec60(ecx_1)
                sub_69ed20(*(i + 0x507c))
                *(i + 0x507c) = 0
                edi = data_b4a5c4
                i_3 = data_b4a5c0
            
            i += 0x510c
            void* eax_3 = edi * 0x510c + i_3
            
            if (i u>= eax_3)
                break
            
            while ((*(i + 0x5108) & 0xffff0000) == 0)
                i += 0x510c
                
                if (i u>= eax_3)
                    goto label_5ac75f
        
        break

label_5ac75f:
int32_t* i_1 = data_b4a5dc

while (i_1 != 0)
    int32_t* i_2 = i_1
    i_1 = i_1[1]
    sub_64c080(i_2, 0xc)

data_b4a5e4 = 0
data_b4a5dc = 0
data_b4a5e0 = 0
LeaveCriticalSection(&data_b4a5e8)
return LeaveCriticalSection(&data_b4a600)
