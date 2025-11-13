.class final enum Lcom/TGActivity/TGActivity$Channels;
.super Ljava/lang/Enum;
.source "TGActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/TGActivity/TGActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "Channels"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/TGActivity/TGActivity$Channels;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/TGActivity/TGActivity$Channels;

.field public static final enum Channel_Games:Lcom/TGActivity/TGActivity$Channels;


# direct methods
.method private static synthetic $values()[Lcom/TGActivity/TGActivity$Channels;
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Lcom/TGActivity/TGActivity$Channels;

    sget-object v1, Lcom/TGActivity/TGActivity$Channels;->Channel_Games:Lcom/TGActivity/TGActivity$Channels;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    return-object v0
.end method

.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/TGActivity/TGActivity$Channels;

    const-string v1, "Channel_Games"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/TGActivity/TGActivity$Channels;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/TGActivity/TGActivity$Channels;->Channel_Games:Lcom/TGActivity/TGActivity$Channels;

    invoke-static {}, Lcom/TGActivity/TGActivity$Channels;->$values()[Lcom/TGActivity/TGActivity$Channels;

    move-result-object v0

    sput-object v0, Lcom/TGActivity/TGActivity$Channels;->$VALUES:[Lcom/TGActivity/TGActivity$Channels;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/TGActivity/TGActivity$Channels;
    .locals 1

    const-class v0, Lcom/TGActivity/TGActivity$Channels;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/TGActivity/TGActivity$Channels;

    return-object p0
.end method

.method public static values()[Lcom/TGActivity/TGActivity$Channels;
    .locals 1

    sget-object v0, Lcom/TGActivity/TGActivity$Channels;->$VALUES:[Lcom/TGActivity/TGActivity$Channels;

    invoke-virtual {v0}, [Lcom/TGActivity/TGActivity$Channels;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/TGActivity/TGActivity$Channels;

    return-object v0
.end method
