from setuptools import find_packages, setup

package_name = 'robotics_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='franciscoazeredo',
    maintainer_email='francisco.azeredo@tecnico.ulisboa.pt',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'ps4_controller_publisher = robotics_controller.ps4_controller_publisher:main',
                'ps4_controller_subscriber = robotics_controller.robotics_controller.ps4_controller_subscriber:main',
        ],
    },
)