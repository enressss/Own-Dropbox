<p align="center">
  <img src="https://github.com/enressss/Own-Dropbox/blob/main/Building-My-Dropbox/Project%20Name%20(1).gif?raw=true" alt="Hello LUG👋 , We have build our own dropbox" style="width: 500px; height: 500px;">
</p>



## 📝Overview

**Our Own Dropbox** This project is a self-developed program that functions similarly to Dropbox and enables users to upload, download, and sync files across several devices. HTML, React for the front end, Python and Node.js for the back end, and SQL for database administration are all used in the development of the app. Replicating fundamental cloud storage features like file uploading, synchronisation, and version management is the main goal.

---

## Table of Contents

1. [Features](#features)
2. [Tech Stack](#tech-stack)
3. [How It Works](#how-it-works)
4. [Setup Instructions](#setup-instructions)
5. [Usage](#usage)
6. [Security Considerations](#security-considerations)
7. [Contributions](#contributions)
8. [License](#license)
9. [Contact](#contact)

## The Features we offer:

**File Upload/Download:** You can download files from any device and upload them to the cloud with ease.

- **Authentication System:** Users can safely handle their data, register, and log in.
- **Version Control:** Maintains a history of file modifications.
- **Security and Privacy:** We have specially taken care for the privacy of data.
- **Cross-Platform Compatibility:** Compatible with desktop and mobile platforms.
- **User-Friendly UI:** Designed for simplicity of use and built using React.

## Tech Stack which are used:

<p style="display: flex; justify-content: center; align-items: center; gap: 23px; flex-wrap: wrap; margin: 23px;">

## Backend:

- **Python**

  <a href="https://www.python.org/downloads/" target="_blank">
  <img src="https://img.shields.io/badge/Python-3.8-blue?style=for-the-badge&logo=python&logoColor=white" alt="Python" width="140" height="44">
  </a>

### Frontend:

- **HTML5/CSS3:**

    <a href="https://developer.mozilla.org/en-US/docs/Web/HTML" target="_blank">
      <img src="https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white" alt="HTML5" width="90" height="35">
    </a>

- **CSS:**

    <a href="https://developer.mozilla.org/en-US/docs/Web/CSS" target="_blank">
      <img src="https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white" alt="CSS3" width="90" height="35">
    </a>

- **React.js:**

    <a href="https://reactjs.org/" target="_blank">
    <img src="https://img.shields.io/badge/React-%E2%9C%94-brightgreen?style=for-the-badge&logo=react&logoColor=white" alt="React">
  </a>

### Database:

- **SQL:**

  <a href="https://www.sqlite.org/download.html" target="_blank">
  <img src="https://img.shields.io/badge/SQL-4479A1?style=for-the-badge&logo=sqlite&logoColor=white" alt="SQL" width="90" height="35">
  </a>

## How It Works <a href="https://www.dropbox.com/"> <img src="https://github.com/enressss/Own-Dropbox/blob/main/Building-My-Dropbox/dribbble-dropbox-animated.gif?raw=true" height="20" width="25"></a> 

1. **Client-Server Interaction:** - To manage file operations like upload/download and device syncing, the frontend (React) sends requests to the backend server (Node.js and Python).

2. **Authentication:** - Through the app, users register and log in. After completing the authentication process, customers can upload and download files.

3. **File Upload/Download:** - Files are uploaded by users through the interface and saved on the server. The same file can be downloaded by users from any connected device.

4. **File Synchronisation:** - To guarantee that all changes are synchronised across devices, the backend continuously monitors the user's folder for updates.

5. **Version Control:** - The backend generates a new version of each file that is published, enabling users to download older versions of the contents as needed.

### Backend Setup:

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/my-dropbox-clone.git
    cd my-dropbox-clone

    ```

2.  **Install Node.js **

    ```bash
    cd backend
    npm install

    ```

3.  **Install Python dependencies**

    ```bash
    cd python-backend
    pip install -r requirements.txt
    ```

4.  **Set up the database:**

- **Make sure PostgreSQL/MySQL is installed and running.:**

- **Create the database, and set the connection string in your .env file.**

5. **Run the backend servers**

- **For node.js serever:**
  ```bash
    cd backend
    npm start
  ```
- **For Python server:**

  ```bash
  cd python-backend
  python app.py
  ```

### Backedn Setup:

1. **Install React dependencies**
   ```bash
   cd frontend
   npm install
   ```
2. **Start the React frontend**
   ```bash
   npm start
   ```
3. **Open the app in your browser at (http://localhost:3000.)**

## Application

## Configure the database:

1. **Upload Files:** -**Go to the file upload area, then drag and drop your files there or choose the files directly with the "Upload" button.**

2. **Download the files:** -**Click the "Download" button after making your selections from your cloud storage.**
3. **File Synchronisation:** -**By automatically syncing your files between devices, the program makes sure the most recent version is always accessible.**

## Security Points to Remember

- **Encryption:**
  All file transfers are handled securely using SSL/TLS encryption.
- **User Verification:**
  To provide secure sessions, JWT (JSON Web Tokens) was employed in its implementation.
- **Database security:** SQL injection is prevented by parameterised queries and ORM.
- **File Integrity:** File hashing ensures that files submitted or downloaded are preserved during transport.

## Contribution

Contributions to this project are welcome! Please follow these steps:

1. **Fork the repository.**
2. **Create a new feature branch.**

   ```bash
   git checkout -b feature/my-new-feature
   ```

3. **Commit your changes**

   ```bash
   git commit -m "Add some feature"
   ```

4. **Push to your branch**
   ```bash
   git push origin feature/my-new-feature
   ```
5. **Submit pull request**

## License

📜 This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). See the [LICENSE](https://github.com/Nupurpusha/Build-Your-Own-Linkedin-Carousel-Generator/blob/main/LICENSE.txt) file for more details.

![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)

## Contact

<p align="center" style="display: flex; justify-content: center; gap: 15px; flex-wrap: wrap;">
  <a href="mailto:lugtu@thapar.edu" style="text-decoration: none;">
    <img src="https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white" alt="Email">
  </a>
  <a href="https://www.instagram.com/lugtiet/" style="text-decoration: none;">
    <img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram">
  </a>
  <a href="https://www.linkedin.com/company/lugtiet/mycompany/" style="text-decoration: none;">
    <img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn">
  </a>
</p>
