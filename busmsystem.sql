-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 10, 2023 at 04:31 PM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `busmsystem`
--

-- --------------------------------------------------------

--
-- Table structure for table `admininfo`
--

CREATE TABLE `admininfo` (
  `sno` int(11) NOT NULL,
  `username` varchar(50) NOT NULL,
  `password` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `admininfo`
--

INSERT INTO `admininfo` (`sno`, `username`, `password`) VALUES
(1, 'Admin', 'Admin123');

-- --------------------------------------------------------

--
-- Table structure for table `alumniinfo`
--

CREATE TABLE `alumniinfo` (
  `sno` int(11) NOT NULL,
  `itemname` varchar(100) NOT NULL,
  `price` varchar(100) NOT NULL,
  `stock` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `alumniinfo`
--

INSERT INTO `alumniinfo` (`sno`, `itemname`, `price`, `stock`) VALUES
(6, 'Ludhiana', '12202841', 8),
(7, 'Ranchi', '12202935', 8),
(8, 'Delhi', '12202978', 8),
(9, 'Jalandhar', '12208934', 9),
(12, 'Ludhiana', '12202841', 7);

-- --------------------------------------------------------

--
-- Table structure for table `bus_details`
--

CREATE TABLE `bus_details` (
  `DriverName` varchar(100) NOT NULL,
  `BusNumber` int(100) NOT NULL,
  `BusOrigin` varchar(100) NOT NULL,
  `BusDestination` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `bus_details`
--

INSERT INTO `bus_details` (`DriverName`, `BusNumber`, `BusOrigin`, `BusDestination`) VALUES
(' sai', 1234, ' phagawra', ' lpu'),
(' ramesh', 4076, ' ludiana', ' lpu'),
(' teja', 675, ' ludiana', ' lpu'),
('suraj', 56473, ' lpu', ' jhalandhar'),
(' Ramu', 5214, ' Phagwara', ' LPU');

-- --------------------------------------------------------

--
-- Table structure for table `feedetails`
--

CREATE TABLE `feedetails` (
  `phagwara` int(100) NOT NULL,
  `jhalandhar` int(100) NOT NULL,
  `amritsar` int(100) NOT NULL,
  `ludiana` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `feedetails`
--

INSERT INTO `feedetails` (`phagwara`, `jhalandhar`, `amritsar`, `ludiana`) VALUES
(1, 2, 3, 4),
(1000, 2000, 3000, 4000),
(1000, 2000, 3000, 4000),
(1000, 2000, 3000, 4000),
(1000, 2000, 3000, 4000);

-- --------------------------------------------------------

--
-- Table structure for table `studentinfo`
--

CREATE TABLE `studentinfo` (
  `sno` int(11) NOT NULL,
  `username` varchar(100) NOT NULL,
  `password` int(255) NOT NULL,
  `studentid` int(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `studentinfo`
--

INSERT INTO `studentinfo` (`sno`, `username`, `password`, `studentid`) VALUES
(3, 'coldcoffee', 10000, 20),
(5, 'smosha', 10, 10),
(7, 'saiteja', 1234, 12202841),
(8, 'ritik12', 123, 12202),
(9, 'ritik11', 123456, 12203738);

-- --------------------------------------------------------

--
-- Table structure for table `teacherinfo`
--

CREATE TABLE `teacherinfo` (
  `sno` int(10) NOT NULL,
  `teacherID` int(100) NOT NULL,
  `pickup` varchar(100) NOT NULL,
  `bustime` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `uaccount`
--

CREATE TABLE `uaccount` (
  `sno` int(11) NOT NULL,
  `name` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL,
  `password` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `uaccount`
--

INSERT INTO `uaccount` (`sno`, `name`, `email`, `password`) VALUES
(1, 'Codewithjdk', 'Codewithjdk@gmail.com', '1234'),
(2, 'anurag', 'av7549097@gmail.com', 'Anurag@1234'),
(3, 'codewithjdk123', '123@gmail.com', '123456789'),
(4, 'shanu', 'shanu@gmail.com', '123456789'),
(5, 'satendra', 'satendra@gmail.com', 'joy12345');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admininfo`
--
ALTER TABLE `admininfo`
  ADD PRIMARY KEY (`sno`);

--
-- Indexes for table `alumniinfo`
--
ALTER TABLE `alumniinfo`
  ADD PRIMARY KEY (`sno`);

--
-- Indexes for table `studentinfo`
--
ALTER TABLE `studentinfo`
  ADD PRIMARY KEY (`sno`);

--
-- Indexes for table `teacherinfo`
--
ALTER TABLE `teacherinfo`
  ADD PRIMARY KEY (`sno`);

--
-- Indexes for table `uaccount`
--
ALTER TABLE `uaccount`
  ADD PRIMARY KEY (`sno`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admininfo`
--
ALTER TABLE `admininfo`
  MODIFY `sno` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `alumniinfo`
--
ALTER TABLE `alumniinfo`
  MODIFY `sno` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT for table `studentinfo`
--
ALTER TABLE `studentinfo`
  MODIFY `sno` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `teacherinfo`
--
ALTER TABLE `teacherinfo`
  MODIFY `sno` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `uaccount`
--
ALTER TABLE `uaccount`
  MODIFY `sno` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
