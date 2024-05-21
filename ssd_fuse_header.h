/*
  FUSE-ioctl: ioctl support for FUSE
  Copyright (C) 2008       SUSE Linux Products GmbH
  Copyright (C) 2008       Tejun Heo <teheo@suse.de>
  This program can be distributed under the terms of the GNU GPLv2.
  See the file COPYING.
*/
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/ioctl.h>
#define PHYSICAL_NAND_NUM (12500) // 8, 10000
#define LOGICAL_NAND_NUM (10000)
#define NAND_SIZE_KB (80)         // 10
#define PAGE_SIZE (4096)          // 4KB
#define INVALID_PCA     (0xFFFFFFFF)
#define FULL_PCA     (0xFFFFFFFE)
#define NAND_LOCATION  "/home/server1/Desktop/ssd_fuse_final/nand_image.img"

enum
{
    SSD_GET_LOGIC_SIZE   = _IOR('E', 0, size_t),
    SSD_GET_PHYSIC_SIZE   = _IOR('E', 1, size_t),
    SSD_GET_WA            = _IOR('E', 2, size_t),
};
