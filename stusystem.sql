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
-- Table structure for teacher
-- ----------------------------
DROP TABLE IF EXISTS `teacher`;
CREATE TABLE `teacher` (
  `tid` int NOT NULL AUTO_INCREMENT,
  `tname` varchar(255) DEFAULT NULL,
  `sex` varchar(255) DEFAULT NULL,
  `age` int DEFAULT NULL,
  `title` varchar(255) DEFAULT NULL,
  `salary` decimal(10,0) DEFAULT NULL,
  PRIMARY KEY (`tid`)
) ENGINE=InnoDB AUTO_INCREMENT=18 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of teacher
-- ----------------------------
INSERT INTO `teacher` VALUES ('1', 'Qiao Feng', 'male', '35', 'Headmaster', '20000');
INSERT INTO `teacher` VALUES ('2', 'Duan Yu', 'male', '28', 'Hall Master', '15000');
INSERT INTO `teacher` VALUES ('3', 'Xu Zhu', 'male', '30', 'Protector', '18000');
INSERT INTO `teacher` VALUES ('4', 'Murong Fu', 'male', '38', 'Hall Master', '22000');
INSERT INTO `teacher` VALUES ('5', 'Wang Yuyan', 'female', '26', 'Hall Master\'s Wife', '16000');
INSERT INTO `teacher` VALUES ('6', 'A Zhu', 'female', '32', 'Hall Master\'s Wife', '14000');
INSERT INTO `teacher` VALUES ('7', 'A Bi', 'female', '24', 'Hall Master\'s Maid', '8000');
INSERT INTO `teacher` VALUES ('8', 'Zhong Ling', 'female', '18', 'Hall Master\'s Maid', '6000');
INSERT INTO `teacher` VALUES ('9', 'Mu Wanqing', 'female', '20', 'Hall Master\'s Maid', '7000');
INSERT INTO `teacher` VALUES ('10', 'Meng Gu', 'female', '40', 'Abbess', '25000');
INSERT INTO `teacher` VALUES ('11', 'Tianshan Tonglao', 'female', '99', 'Head Abbess', '30000');
INSERT INTO `teacher` VALUES ('12', 'Li QiuShui', 'female', '88', 'Supreme Head', '28000');
INSERT INTO `teacher` VALUES ('13', 'Wu Ya zi', 'male', '100', 'Ancestor', '35000');
INSERT INTO `teacher` VALUES ('14', 'Ding Chunqiu', 'male', '66', 'Uncle', '26000');
INSERT INTO `teacher` VALUES ('15', 'Su Xinghe', 'male', '72', 'Uncle', '24000');
INSERT INTO `teacher` VALUES ('16', 'Duan Yanqing', 'male', '54', 'Protector', '12000');
INSERT INTO `teacher` VALUES ('17', 'You Tanzhi', 'male', '20', 'Servant', '5000');
