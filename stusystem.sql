SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for course
-- ----------------------------
DROP TABLE IF EXISTS `course`;
CREATE TABLE `course` (
  `id` int NOT NULL,
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `score` int DEFAULT NULL,
  `value` int DEFAULT '5',
  `tid` int DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of course
-- ----------------------------
INSERT INTO `course` VALUES ('1', 'English', '89', '5', '13');
INSERT INTO `course` VALUES ('2', 'gMath', '67', '5', '19');
INSERT INTO `course` VALUES ('3', 'gMath', '78', '5', '14');
INSERT INTO `course` VALUES ('4', 'gMath', '67', '5', '15');
INSERT INTO `course` VALUES ('5', 'gMath', '85', '5', '13');
INSERT INTO `course` VALUES ('6', 'gMath', '46', '5', '19');
INSERT INTO `course` VALUES ('7', 'gMath', '23', '5', '15');
INSERT INTO `course` VALUES ('8', 'gMath', '64', '5', '16');
INSERT INTO `course` VALUES ('9', 'gMath', '44', '5', '17');
INSERT INTO `course` VALUES ('10', 'gMath', '55', '5', '18');
INSERT INTO `course` VALUES ('11', 'gMath', '77', '5', '15');
INSERT INTO `course` VALUES ('12', 'gMath', '88', '5', '4');
INSERT INTO `course` VALUES ('13', 'gMath', '99', '5', '15');
INSERT INTO `course` VALUES ('14', 'gMath', '100', '5', '0');
INSERT INTO `course` VALUES ('15', 'gMath', '45', '5', '0');
INSERT INTO `course` VALUES ('16', 'gMath', '76', '5', '18');
INSERT INTO `course` VALUES ('17', 'gMath', '82', '5', '10');
INSERT INTO `course` VALUES ('18', 'gMath', '84', '5', '17');
INSERT INTO `course` VALUES ('19', 'gMath', '81', '5', '12');
INSERT INTO `course` VALUES ('20', 'gMath', '86', '5', '9');

-- ----------------------------
-- Table structure for department
-- ----------------------------
DROP TABLE IF EXISTS `department`;
CREATE TABLE `department` (
  `did` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `name` varchar(255) NOT NULL,
  `director` varchar(255) DEFAULT NULL,
  `capcity` int DEFAULT NULL,
  `num` int DEFAULT '461',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of department
-- ----------------------------
INSERT INTO `department` VALUES ('J1009', 'Architecture Department', 'Xiaojuan', '500', '461');
INSERT INTO `department` VALUES ('Y1018', 'Art Department', 'Xiaojun', '500', '461');
INSERT INTO `department` VALUES ('S1014', 'Biology Department', 'Xiaomin', '500', '461');
INSERT INTO `department` VALUES ('H1003', 'Chemistry Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('C1001', 'Communications Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1019', 'Computer Science Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('J1017', 'Economics Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1011', 'Education Department', 'Xiaobin', '500', '461');
INSERT INTO `department` VALUES ('D1015', 'Electrical Engineering Department', 'Xiaotao', '500', '461');
INSERT INTO `department` VALUES ('G1008', 'Engineering Department', 'Xiaoliang', '500', '461');
INSERT INTO `department` VALUES ('W1007', 'Foreign Languages Department', 'Xiaohua', '500', '461');
INSERT INTO `department` VALUES ('D1006', 'Geography Department', 'Xiaomei', '500', '461');
INSERT INTO `department` VALUES ('L1005', 'History Department', 'Xiaoqiang', '500', '461');
INSERT INTO `department` VALUES ('G1016', 'Management Department', 'Xiaoyan', '500', '461');
INSERT INTO `department` VALUES ('S1012', 'Mathematics Department', 'Xiaolei', '500', '461');
INSERT INTO `department` VALUES ('Y1004', 'Medical Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('Y1020', 'Music Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('W1013', 'Physics Department', 'Xiaona', '500', '461');
INSERT INTO `department` VALUES ('Z1010', 'Politics and Law Department', 'Xiaohui', '500', '461');
INSERT INTO `department` VALUES ('T1002', 'Sports Department', 'Xiaojun', '500', '461');



-- ----------------------------
-- Table structure for department
-- ----------------------------
DROP TABLE IF EXISTS `department`;
CREATE TABLE `department` (
  `did` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `name` varchar(255) NOT NULL,
  `director` varchar(255) DEFAULT NULL,
  `capcity` int DEFAULT NULL,
  `num` int DEFAULT '461',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of department
-- ----------------------------
INSERT INTO `department` VALUES ('J1009', 'Architecture Department', 'Xiaojuan', '500', '461');
INSERT INTO `department` VALUES ('Y1018', 'Art Department', 'Xiaojun', '500', '461');
INSERT INTO `department` VALUES ('S1014', 'Biology Department', 'Xiaomin', '500', '461');
INSERT INTO `department` VALUES ('H1003', 'Chemistry Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('C1001', 'Communications Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1019', 'Computer Science Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('J1017', 'Economics Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1011', 'Education Department', 'Xiaobin', '500', '461');
INSERT INTO `department` VALUES ('D1015', 'Electrical Engineering Department', 'Xiaotao', '500', '461');
INSERT INTO `department` VALUES ('G1008', 'Engineering Department', 'Xiaoliang', '500', '461');
INSERT INTO `department` VALUES ('W1007', 'Foreign Languages Department', 'Xiaohua', '500', '461');
INSERT INTO `department` VALUES ('D1006', 'Geography Department', 'Xiaomei', '500', '461');
INSERT INTO `department` VALUES ('L1005', 'History Department', 'Xiaoqiang', '500', '461');
INSERT INTO `department` VALUES ('G1016', 'Management Department', 'Xiaoyan', '500', '461');
INSERT INTO `department` VALUES ('S1012', 'Mathematics Department', 'Xiaolei', '500', '461');
INSERT INTO `department` VALUES ('Y1004', 'Medical Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('Y1020', 'Music Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('W1013', 'Physics Department', 'Xiaona', '500', '461');
INSERT INTO `department` VALUES ('Z1010', 'Politics and Law Department', 'Xiaohui', '500', '461');
INSERT INTO `department` VALUES ('T1002', 'Sports Department', 'Xiaojun', '500', '461');



-- ----------------------------
-- Table structure for department
-- ----------------------------
DROP TABLE IF EXISTS `department`;
CREATE TABLE `department` (
  `did` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `name` varchar(255) NOT NULL,
  `director` varchar(255) DEFAULT NULL,
  `capcity` int DEFAULT NULL,
  `num` int DEFAULT '461',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of department
-- ----------------------------
INSERT INTO `department` VALUES ('J1009', 'Architecture Department', 'Xiaojuan', '500', '461');
INSERT INTO `department` VALUES ('Y1018', 'Art Department', 'Xiaojun', '500', '461');
INSERT INTO `department` VALUES ('S1014', 'Biology Department', 'Xiaomin', '500', '461');
INSERT INTO `department` VALUES ('H1003', 'Chemistry Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('C1001', 'Communications Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1019', 'Computer Science Department', 'Xiaofang', '500', '461');
INSERT INTO `department` VALUES ('J1017', 'Economics Department', 'Xiaohong', '500', '461');
INSERT INTO `department` VALUES ('J1011', 'Education Department', 'Xiaobin', '500', '461');
INSERT INTO `department` VALUES ('D1015', 'Electrical Engineering Department', 'Xiaotao', '500', '461');
INSERT INTO `department` VALUES ('G1008', 'Engineering Department', 'Xiaoliang', '500', '461');
INSERT INTO `department` VALUES ('W1007', 'Foreign Languages Department', 'Xiaohua', '500', '461');
INSERT INTO `department` VALUES ('D1006', 'Geography Department', 'Xiaomei', '500', '461');
INSERT INTO `department` VALUES ('L1005', 'History Department', 'Xiaoqiang', '500', '461');
INSERT INTO `department` VALUES ('G1016', 'Management Department', 'Xiaoyan', '500', '461');
INSERT INTO `department` VALUES ('S1012', 'Mathematics Department', 'Xiaolei', '500', '461');
INSERT INTO `department` VALUES ('Y1004', 'Medical Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('Y1020', 'Music Department', 'Xiaolan', '500', '461');
INSERT INTO `department` VALUES ('W1013', 'Physics Department', 'Xiaona', '500', '461');
INSERT INTO `department` VALUES ('Z1010', 'Politics and Law Department', 'Xiaohui', '500', '461');
INSERT INTO `department` VALUES ('T1002', 'Sports Department', 'Xiaojun', '500', '461');