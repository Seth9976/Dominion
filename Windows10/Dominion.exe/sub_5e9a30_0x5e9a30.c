// 函数: sub_5e9a30
// 地址: 0x5e9a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = data_b604e0
void* eax

if (arg1 == 0xffffffff)
    sub_63b870(eax, &data_801800, "who != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x590e, "SetDisplayWho")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

data_b604e0 = arg1

if (arg1 == edi)
    return 

void* eax_1 = sub_5cc410(eax, arg1, 0x3ea, 0, 0)

if (eax_1 != 0)
    *(eax_1 + 0x84) = 0
    eax_1 = sub_5cdee0(eax_1, 0, eax_1, 1)

void* eax_2 = sub_5cc410(eax_1, arg1, 0x3eb, 0, 0)

if (eax_2 != 0)
    *(eax_2 + 0x84) = 0
    eax_2 = sub_5cdee0(eax_2, 0, eax_2, 1)

void* eax_3 = sub_5cc410(eax_2, arg1, 0x3ec, 0, 0)

if (eax_3 != 0)
    *(eax_3 + 0x84) = 0
    eax_3 = sub_5cdee0(eax_3, 0, eax_3, 1)

void* eax_4 = sub_5cc410(eax_3, edi, 0x3ea, 0, 0)

if (eax_4 != 0)
    *(eax_4 + 0x84) = 0
    eax_4 = sub_5cdee0(eax_4, 0, eax_4, 1)

void* eax_5 = sub_5cc410(eax_4, edi, 0x3eb, 0, 0)

if (eax_5 != 0)
    *(eax_5 + 0x84) = 0
    eax_5 = sub_5cdee0(eax_5, 0, eax_5, 1)

eax = sub_5cc410(eax_5, edi, 0x3ec, 0, 0)

if (eax != 0)
    *(eax + 0x84) = 0
    sub_5cdee0(eax, 0, eax, 1)
