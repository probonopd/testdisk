/*

    File: sessionp.h

    Copyright (C) 2006-2008 Christophe GRENIER <grenier@cgsecurity.org>
  
    This software is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License along
    with this program; if not, write the Free Software Foundation, Inc., 51
    Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 */
#ifdef __cplusplus
extern "C" {
#endif

int session_load(char **cmd_device, char **current_cmd, alloc_data_t *list_free_space);
int session_save(alloc_data_t *list_free_space, disk_t *disk_car, const partition_t *partition, const file_enable_t *files_enable, const unsigned int blocksize, const unsigned int paranoid, const unsigned int keep_corrupted_file, const unsigned int mode_ext2, const unsigned int expert, const unsigned int lowmem, const unsigned int carve_free_space_only, const int verbose);

#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif
