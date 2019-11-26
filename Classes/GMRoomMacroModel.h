//
//  GMRoomMacroModel.h
//  SuperGome
//
//  Created by chenyh on 2019/1/29.
//  Copyright © 2019 Gome. All rights reserved.
//

#import <Foundation/Foundation.h>
//获取房间列表
#define kRoomListUrl @"/v4/app/room/list"
//查询家庭下的房间数量
#define kRoomCountUrl @"/v4/app/room/countRoomsByHouseId"
//添加房间
#define kAddRoomUrl @"/v4/app/room/add"
//检验房间名称是否重复
#define kRoomNameExistsUrl @"/v4/app/room/nameExists"
//房间编辑
#define kModifyRoomUrl @"/v4/app/room/modify"
//修改房间（名称，图标和转移设备
#define kUpdateRoomUrl @"/v4/app/room/update"
//房间删除
#define kRoomDeleteUrl @"/v4/app/room/delete"
//查询默认房间
#define kGetDefaultRoomUrl @"/v4/app/room/defaultRooms"
//家庭设备转移到其他的房间
#define kDeviceTransferToRoomUrl @"/v4/app/housedevice/transfer"
//默认房间图标
#define kDefaultRoomIconUrl @"/v4/app/room/defaultIcons"
//默认家庭设备删除（解绑）
#define kDefaultFamilyUnbindUrl @"/v4/app/device/unbind"
//设置设备位置，修改设备名称接口
#define kSetFamilyDeviceAddressUrl @"/v4/app/housedevice/deviceChange"

//非默认家庭设备删除
#define kNoDefaultFamilyDeleteUrl @"/v4/app/housedevice/delete"
//查询默认房间
#define kGetDefaultRoomIconUrl @"/v4/app/room/getDefaultRoomByHouseId"
//获取设备详情信息
#define kGetDeviceInfoUrl @"/v4/app/housedevice/details"
//获取网关子设备详情信息
#define kGetSubDeviceInfoUrl @"/v4/app/housedevice/subdetails"
//修改设备名称
#define kModifyDeviceNameUrl @"/v4/app/housedevice/changeDeviceName"
//修改网关子设备名称
#define kModifySubDeviceNameUrl @"/v4/app/housedevice/changeSubDeviceName"
//网关子设备解绑（银河风云子设备）
#define kYinHeFengYunGateWaySubDeviceUnBindUrl @"/v1/third/childDevUnBind"
@interface GMRoomMacroModel : NSObject

@end
