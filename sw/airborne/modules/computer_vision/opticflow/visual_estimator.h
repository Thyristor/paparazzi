/*
 * Copyright (C) 2014 Hann Woei Ho
 *
 * This file is part of Paparazzi.
 *
 * Paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * Paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

/**
 * @file modules/computer_vision/opticflow/visual_estimator.h
 * @brief optical-flow based hovering for Parrot AR.Drone 2.0
 *
 * Sensors from vertical camera and IMU of Parrot AR.Drone 2.0
 */

#ifndef VISUAL_ESTIMATOR_H
#define VISUAL_ESTIMATOR_H

// Variables used by the controller
extern float Velx, Vely;
extern int flow_count;
extern struct FloatVect3 V_body;

/**
 * Initialize visual estimator.
 * @param w  image width
 * @param h  image height
 */
void opticflow_plugin_init(unsigned int w, unsigned int h);
void opticflow_plugin_run(unsigned char *frame);

#endif /* VISUAL_ESTIMATOR_H */
