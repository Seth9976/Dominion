// 函数: sub_74cd20
// 地址: 0x74cd20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == 1)
    SendMessageA(arg1, 0x466, 1, arg4)
else if (arg2 == 2 && SHGetPathFromIDListA(arg3, &data_1a9a5b8) != 0)
    SendMessageA(arg1, 0x464, 0, &data_1a9a5b8)

return 0
