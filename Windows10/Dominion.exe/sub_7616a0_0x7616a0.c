// 函数: sub_7616a0
// 地址: 0x7616a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = *arg1

if (edi == 0)
    return 

SetEvent(edi[5])
SetEvent(edi[4])
int32_t* eax = edi[6]

if (eax != 0)
    sub_761df0(eax)
    sub_761d90(edi[6])

int32_t edx = edi[0xe]

if (edx != 0)
    int32_t* eax_1 = *edi
    (*(*eax_1 + 0x1c))(eax_1, edx)
    int32_t* eax_2 = edi[0xe]
    (*(*eax_2 + 8))(eax_2)

CloseHandle(edi[4])
CloseHandle(edi[5])
int32_t* ecx_3 = edi[2]

if (ecx_3 != 0)
    (*(*ecx_3 + 0x2c))(ecx_3)

int32_t* ecx_4 = edi[3]

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    edi[3] = 0

int32_t* ecx_5 = edi[2]

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    edi[2] = 0

int32_t* ecx_6 = edi[1]

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(ecx_6)
    edi[1] = 0

int32_t* ecx_7 = *edi

if (ecx_7 != 0)
    (*(*ecx_7 + 8))(ecx_7)
    *edi = 0

int32_t __saved_esi_6 = 0x40
operator new(edi)
*arg1 = 0
return CoUninitialize() __tailcall
