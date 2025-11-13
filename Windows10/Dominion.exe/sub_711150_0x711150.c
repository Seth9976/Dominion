// 函数: sub_711150
// 地址: 0x711150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_19e2770 == 0)
    data_19e2770 = 1
    data_19e2770 = sub_714870("<empty>")

int32_t eax_2 = data_147ded8
int32_t* result

if (eax_2 == 0)
    result = malloc(0x38)
else
    result = eax_2(0x38, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0xe4)

if (result != 0)
    memset(result, 0, 0x38)

int32_t eax_3 = data_147ded8
*result = arg1
result[4] = 0x3f800000
int32_t** eax_4

if (eax_3 == 0)
    eax_4 = malloc(0x14)
else
    eax_4 = eax_3(0x14, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x45)

if (eax_4 != 0)
    eax_4[1] = 0
    eax_4[4] = 0

int32_t eax_5 = data_147ded8
*eax_4 = result
eax_4[2] = 0
eax_4[3] = 0x10
int32_t eax_6

if (eax_5 == 0)
    eax_6 = malloc(0x40)
else
    eax_6 = eax_5(0x40, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x49)

if (eax_6 != 0)
    memset(eax_6, 0, 0x40)

int32_t eax_7 = data_147ded8
eax_4[1] = eax_6
eax_4[4] = 0
result[9] = eax_4
int32_t eax_8

if (eax_7 == 0)
    eax_8 = malloc(0x200)
else
    eax_8 = eax_7(0x200, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0xeb)

if (eax_8 != 0)
    memset(eax_8, 0, 0x200)

int32_t eax_9 = data_147ded8
result[8] = eax_8
int32_t eax_10

if (eax_9 == 0)
    eax_10 = malloc(0x200)
else
    eax_10 =
        eax_9(0x200, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0xed)

if (eax_10 != 0)
    memset(eax_10, 0, 0x200)

result[0xa] = eax_10
result[0xc] = 0x80
return result
