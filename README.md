<div style="display: flex; justify-content: space-between; align-items: center;">
  <div style="max-width: 60%; text-align: left;">
    <h1><strong>Buliding my own </strong></h1>
    <p>A tool to create customizable PDF carousels for LinkedIn posts or any other purpose. This project focuses on creating a user-friendly interface that allows users to design slides, add text, images, and backgrounds, and export the final product as a PDF.</p>
  </div>
 </div>

![Dropbox Clone Preview](./assets/dropbox-preview.png)

## Table of Contents

1. [Project Overview](#project-overview)
2. [Features](#features)
3. [Tech Stack](#tech-stack)
4. [How It Works](#how-it-works)
5. [Setup Instructions](#setup-instructions)
6. [How to Use](#how-to-use)
7. [Screenshots](#screenshots)
8. [Security Considerations](#security-considerations)
9. [Contribution Guidelines](#contribution-guidelines)
10. [License](#license)
11. [Contact](#contact)

## Project Overview

This project is a custom-built cloud storage system inspired by Dropbox, using modern web technologies and a client-server architecture. It enables users to upload, download, and sync files across multiple devices, with file sharing and version control features. The purpose of this project is to provide a scalable, secure, and easy-to-use file storage system.

## Features

- **File Upload/Download:** Users can upload and download files via a web interface.
- **File Synchronization:** Keeps files synchronized across multiple devices automatically.
- **Authentication:** Basic authentication is required for secure file access.
- **Version Control:** Tracks changes and keeps previous versions of files.
- **File Sharing:** Users can share files with other users via unique links.
- **Responsive Design:** Works across all devices, including desktop and mobile.

## Tech Stack

- **Frontend:**
  - **HTML & CSS:** For structuring and styling the user interface.
  - **React.js:** For building the interactive UI.
- **Backend:**

  - **Python (Flask or Django):** Handles backend logic, file management, and API endpoints.
  - **Node.js (Express):** Manages authentication, file uploads/downloads, and API routing.

- **Database:**
  - **SQL:** Used for storing user credentials, file metadata, and versioning info.
- **Networking:**
  - **REST APIs:** Built using Flask/Express for managing file upload/download and sync operations.

## How It Works

### Client-Server Architecture:

- The **React frontend** serves as the user interface where users can log in, view files, upload/download files, and manage their file versions.
- The **Python/Node.js backend** serves the API, managing file uploads, downloads, and user data.
- **SQL database** stores file metadata, user data, and file versions.

### 1. File Upload/Download:

- Users can upload files to the server through the frontend, which communicates with the backend API to store files on the server.
- Files can be downloaded directly from the server by authenticated users.

### 2. File Synchronization:

- When files are uploaded or updated, they are automatically synchronized with the server, allowing users to access the most recent versions from any device.

### 3. Version Control:

- Each time a file is modified, the backend creates a new version, allowing users to view or restore previous versions.

### 4. Authentication:

- The system includes login functionality using session-based authentication or tokens (like JWT) for secure access to files.

## Setup Instructions

### Prerequisites:

- **Node.js** and **npm** installed.
- **Python** installed.
- **SQL** (SQLite, PostgreSQL, or MySQL) installed for the database.

### Backend Setup

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/dropbox-clone.git
   cd dropbox-clone
   ```

# Build Your Own Dropbox

![Dropbox Clone Preview](./assets/dropbox-preview.png)

## Table of Contents

1. [Project Overview](#project-overview)
2. [Features](#features)
3. [Tech Stack](#tech-stack)
4. [How It Works](#how-it-works)
5. [Setup Instructions](#setup-instructions)
6. [How to Use](#how-to-use)
7. [Screenshots](#screenshots)
8. [Security Considerations](#security-considerations)
9. [Contribution Guidelines](#contribution-guidelines)
10. [License](#license)
11. [Contact](#contact)

## Project Overview

This project is a custom-built cloud storage system inspired by Dropbox, using modern web technologies and a client-server architecture. It enables users to upload, download, and sync files across multiple devices, with file sharing and version control features. The purpose of this project is to provide a scalable, secure, and easy-to-use file storage system.

## Features

- **File Upload/Download:** Users can upload and download files via a web interface.
- **File Synchronization:** Keeps files synchronized across multiple devices automatically.
- **Authentication:** Basic authentication is required for secure file access.
- **Version Control:** Tracks changes and keeps previous versions of files.
- **File Sharing:** Users can share files with other users via unique links.
- **Responsive Design:** Works across all devices, including desktop and mobile.

## Tech Stack

- **Frontend:**
  - **HTML & CSS:** For structuring and styling the user interface.
  - **React.js:** For building the interactive UI.
- **Backend:**

  - **Python (Flask or Django):** Handles backend logic, file management, and API endpoints.
  - **Node.js (Express):** Manages authentication, file uploads/downloads, and API routing.

- **Database:**
  - **SQL:** Used for storing user credentials, file metadata, and versioning info.
- **Networking:**
  - **REST APIs:** Built using Flask/Express for managing file upload/download and sync operations.

## How It Works

### Client-Server Architecture:

- The **React frontend** serves as the user interface where users can log in, view files, upload/download files, and manage their file versions.
- The **Python/Node.js backend** serves the API, managing file uploads, downloads, and user data.
- **SQL database** stores file metadata, user data, and file versions.

### 1. File Upload/Download:

- Users can upload files to the server through the frontend, which communicates with the backend API to store files on the server.
- Files can be downloaded directly from the server by authenticated users.

### 2. File Synchronization:

- When files are uploaded or updated, they are automatically synchronized with the server, allowing users to access the most recent versions from any device.

### 3. Version Control:

- Each time a file is modified, the backend creates a new version, allowing users to view or restore previous versions.

### 4. Authentication:

- The system includes login functionality using session-based authentication or tokens (like JWT) for secure access to files.

## Setup Instructions

### Prerequisites:

- **Node.js** and **npm** installed.
- **Python** installed.
- **SQL** (SQLite, PostgreSQL, or MySQL) installed for the database.

### Backend Setup

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/dropbox-clone.git
   cd dropbox-clone
   ```
