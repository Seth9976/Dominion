// 函数: _Z20GameAppHandleMessageRK14NetworkMessage
// 地址: 0x9a7fc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 4)

if (x8 s> 0x7cf)
    if (x8 == 0xfa0)
        goto label_9a802c
    
    if (x8 s>= 0x1388)
        if (x8 s<= 0xf42a3)
            goto label_9a7fe4
        
        goto label_9a802c
else if (x8 s> 0x5db)
label_9a802c:
    *gServer = gServerStorage
    GameServerHandleMessage(arg1)
    *gServer = 0
else
label_9a7fe4:
    *gClient = gClientStorage
    GameClientHandleMessage(arg1)
    *gClient = 0

return 1
